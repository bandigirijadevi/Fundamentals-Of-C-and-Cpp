# Git & GitHub — From Push-Only to Branch Pro
### A 30–40 Minute Hands-On Session

> **Who this is for:** You know `git add`, `git commit`, `git push` — and that's it. By the end of this session, you'll understand *why* Git works the way it does, and you'll be branching like a pro.

---

## 🗺️ Session Roadmap

| # | Topic | Time |
|---|-------|------|
| 1 | Why Git? The mental model | 3 min |
| 2 | How Git actually works | 8 min |
| 3 | Beyond your 3 commands | 7 min |
| 4 | Branching — what and why | 10 min |
| 5 | A real solo workflow | 7 min |
| 6 | Cheat sheet + Q&A | 5 min |

---

## 1. Why Git? The Mental Model
### ⏱ 3 minutes

Forget "version control" for a second. Think of Git as a **time machine for your code**.

Every time you commit, you're taking a **snapshot** of your entire project at that moment. You can jump back to any snapshot, any time.

Without Git, you've probably done this:

```
project/
  main.py
  main_v2.py
  main_FINAL.py
  main_FINAL_v2.py
  main_ACTUALLY_FINAL.py   ← we've all been here
```

Git replaces that chaos with a clean, structured history.

### 🧠 Key idea:
> Git doesn't save *changes* — it saves **snapshots of your entire project** at each commit.

---

## 2. How Git Actually Works
### ⏱ 8 minutes

### The 3 Areas of Git

Every file in your project lives in one of 3 places:

```
┌─────────────────────────────────────────────────────┐
│                                                     │
│   Working Directory  →  Staging Area  →  Repository │
│   (your files)          (git add)       (git commit) │
│                                                     │
└─────────────────────────────────────────────────────┘
```

| Area | What it is | How you move things here |
|------|-----------|--------------------------|
| **Working Directory** | Files you're editing right now | Just edit them |
| **Staging Area** | Files you've *chosen* to include in the next snapshot | `git add` |
| **Repository (local)** | Saved snapshots (commits) | `git commit` |
| **Remote (GitHub)** | Your repo on the internet | `git push` |

### Local vs. Remote

- **Local** = on your laptop. Only you can see it.
- **Remote** = on GitHub. Accessible from anywhere.

`git push` is how you sync your local commits up to GitHub.

---

### ✋ Hands-On #1 — Set Up Your Practice Repo

> **Goal:** Create a fresh repo to practice in throughout this session.

```bash
# Step 1: Create a new folder
mkdir git-practice
cd git-practice

# Step 2: Initialize Git
git init

# Step 3: Create a file
echo "# My Practice Repo" > README.md

# Step 4: Your first commit
git add README.md
git commit -m "Initial commit"
```

**Check:** You should see `[main (root-commit) xxxxxxx] Initial commit`

---

## 3. Beyond Your 3 Commands
### ⏱ 7 minutes

You know `add`, `commit`, `push`. Here are 4 commands that will change your daily Git life.

---

### `git status` — Your best friend

Always run this before anything else. It tells you exactly what's going on.

```bash
git status
```

It shows:
- Files you've changed but not staged
- Files staged and ready to commit
- Files that are untracked (Git doesn't know about them yet)

---

### `git log` — Your time machine controls

```bash
git log
```

Shows the full history of commits — who made them, when, and the message.

For a cleaner view:
```bash
git log --oneline
```

---

### `git diff` — See exactly what changed

```bash
git diff
```

Shows line-by-line what you've changed since the last commit. Red = removed, Green = added.

---

### `git pull` — Sync from GitHub to your laptop

```bash
git pull
```

The opposite of `git push`. Brings down any changes from GitHub to your local machine.

> 💡 Rule of thumb: **always `git pull` before you start working**, and **`git push` when you're done**.

---

### ✋ Hands-On #2 — Explore Your Repo

```bash
# Step 1: Make a change
echo "Learning Git is fun." >> README.md

# Step 2: Check what changed
git diff

# Step 3: Check the status
git status

# Step 4: Stage and commit
git add README.md
git commit -m "Add first line to README"

# Step 5: See your history
git log --oneline
```

**Check:** You should see 2 commits in the log.

---

## 4. Branching — What and Why
### ⏱ 10 minutes

### What is a branch?

Think of `main` as the **clean, working copy** of your project. A branch is a **parallel universe** where you can experiment freely — without touching `main`.

```
main:     A ── B ── C
                     \
feature:              D ── E
```

- `A`, `B`, `C` are commits on `main`
- `D`, `E` are commits on your `feature` branch
- `main` stays untouched while you work on `feature`

When you're happy with your work, you **merge** the branch back into `main`.

---

### Why bother with branches (even solo)?

Even working alone, branches protect you:

- You're halfway through a new feature and realize it's broken — `main` is still clean ✅
- You want to try two different approaches — make two branches ✅
- You accidentally mess everything up — just delete the branch ✅

> 🎯 **Rule:** `main` should always have working code. Do your experiments on branches.

---

### The Core Branching Commands

```bash
# See all branches
git branch

# Create a new branch
git branch feature-name

# Switch to a branch
git checkout feature-name

# Create AND switch in one step (use this one)
git checkout -b feature-name

# Merge a branch into main
git checkout main
git merge feature-name

# Delete a branch after merging
git branch -d feature-name
```

---

### ✋ Hands-On #3 — Your First Branch

```bash
# Step 1: Create and switch to a new branch
git checkout -b add-about-section

# Step 2: Confirm you're on the new branch
git branch
# The * shows your current branch

# Step 3: Make a change
echo "## About" >> README.md
echo "This is a practice repo." >> README.md

# Step 4: Commit on the branch
git add README.md
git commit -m "Add about section to README"

# Step 5: Check the log — notice you're ahead of main
git log --oneline
```

**Check:** You should see 3 commits, and you're on `add-about-section`.

---

## 5. A Real Solo Workflow
### ⏱ 7 minutes

Here's the workflow you'll use for every piece of work from now on:

```
1. Pull latest main
2. Create a branch
3. Write code + commit often
4. Merge back to main
5. Push to GitHub
6. Delete the branch
```

---

### The Full Loop — Step by Step

```bash
# 1. Make sure main is up to date
git checkout main
git pull

# 2. Create a branch for your work
git checkout -b fix-login-bug

# 3. Do your work... then commit
git add .
git commit -m "Fix login redirect after logout"

# 4. Go back to main and merge
git checkout main
git merge fix-login-bug

# 5. Push to GitHub
git push

# 6. Clean up
git branch -d fix-login-bug
```

---

### ✋ Hands-On #4 — The Full Workflow

```bash
# Step 1: Go back to main
git checkout main

# Step 2: Check the log — your branch work isn't here yet
git log --oneline

# Step 3: Merge the branch
git merge add-about-section

# Step 4: Check the log again — now it's all here
git log --oneline

# Step 5: Delete the branch
git branch -d add-about-section

# Step 6: Confirm only main remains
git branch
```

**Check:** `git log --oneline` should show all 3 commits on `main`.

---

### 💥 Bonus: What is a Merge Conflict?

A merge conflict happens when the same line was changed in two different branches. Git doesn't know which version to keep — so it asks you.

It looks like this in the file:

```
<<<<<<< main
This is the original line.
=======
This is the changed line from the branch.
>>>>>>> feature-branch
```

**Fix it by:**
1. Opening the file
2. Deleting the `<<<<`, `====`, `>>>>` markers
3. Keeping whichever version you want (or combining them)
4. Saving, then `git add` and `git commit`

> You won't hit this working solo very often — but now you know what it looks like.

---

## 6. Cheat Sheet
### ⏱ 5 minutes + Q&A

```
─────────────────────────────────────────────────────
  GIT CHEAT SHEET
─────────────────────────────────────────────────────

  DAILY COMMANDS
  git status              → What's going on right now?
  git log --oneline       → Show commit history
  git diff                → What changed since last commit?
  git pull                → Sync from GitHub to local

  SAVING WORK
  git add .               → Stage all changes
  git add <file>          → Stage a specific file
  git commit -m "msg"     → Save a snapshot

  BRANCHING
  git branch              → List all branches
  git checkout -b <name>  → Create + switch to branch
  git checkout <name>     → Switch to existing branch
  git merge <name>        → Merge branch into current
  git branch -d <name>    → Delete a branch

  REMOTE
  git push                → Upload commits to GitHub
  git pull                → Download commits from GitHub

─────────────────────────────────────────────────────
```

---

## 🏁 What You Can Do Now

- ✅ Explain the 3 areas of Git (working dir, staging, repo)
- ✅ Use `status`, `log`, `diff`, `pull` confidently
- ✅ Create branches for new features or experiments
- ✅ Merge branches back to `main`
- ✅ Follow a clean, repeatable solo Git workflow

---

## 📚 What's Next (When You're Ready)

| Topic | Why it matters |
|-------|---------------|
| `git stash` | Temporarily set aside work-in-progress |
| `git rebase` | Cleaner alternative to merge |
| Pull Requests | How teams review code on GitHub |
| `.gitignore` | Stop tracking files you don't want in Git |
| `git bisect` | Find which commit introduced a bug |

---

*Happy branching! 🌿*
