# LinearProgramming

A small, focused repository for experimenting with **Linear Programming (LP)** concepts and implementations. The project is primarily written in **C**, with **Jupyter notebooks** used for exploration, explanations, and/or result visualization.

> If you’re looking for a quick start: build the C code (instructions below), then run the provided executables on example inputs (if included). For notebook-based exploration, open the `.ipynb` files in Jupyter.

---

## Contents

- **C implementations** (core algorithms / solvers / utilities)
- **Jupyter notebooks** (experiments, derivations, demos, plots)
- Small amount of **Python** (typically notebook support / helpers)

---

## Project Goals

- Provide a practical codebase for learning and testing LP-related methods.
- Keep implementations lightweight and easy to inspect.
- Support experimentation through notebooks (e.g., validation, visualization, comparisons).

---

## Repository Structure

The exact layout may vary, but commonly you’ll find:

- `*.c`, `*.h` — core source and header files
- `*.ipynb` — notebooks for explanations and experiments
- (optional) `data/` or `inputs/` — sample inputs / datasets
- (optional) `Makefile` or build scripts — build automation

If you don’t see a build script, you can still compile manually (see below).

---

## Build / Compilation (C)

### Prerequisites
- A C compiler:
  - Linux/macOS: `gcc` or `clang`
  - Windows: MSYS2/MinGW (`gcc`) or Visual Studio (MSVC)
- (Optional but recommended) `make` if a `Makefile` is present
