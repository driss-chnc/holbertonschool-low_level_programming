# stack_example.c

## Step 1 – Program start

### Stack
- `main()` stack frame is created.
- `main()` calls `walk_stack(0, 3)`.

### Heap
- Empty.

### Pointer relationships
- None.

---

## Step 2 – First call to `walk_stack(0, 3)`

### Stack
A new stack frame is created for `walk_stack`.

Local variables:
- `depth = 0`
- `max_depth = 3`
- `marker = 0`

`dump_frame("enter", 0)` creates another temporary stack frame containing:
- `local_int`
- `local_buf[16]`
- `p_local` pointing to `local_int`

### Heap
- Empty.

### Pointer relationships
- `p_local` points to `local_int`.

---

## Step 3 – Recursive calls

Each recursive call creates a new stack frame.

```
main
 └── walk_stack(depth=0)
      └── walk_stack(depth=1)
           └── walk_stack(depth=2)
                └── walk_stack(depth=3)
```

Each frame has its own independent:
- `marker`
- `depth`
- `max_depth`
- `local_int`
- `local_buf`
- `p_local`

The addresses printed by the program change because every recursive call owns different local variables.

### Heap
- Still empty.

---

## Step 4 – Returning from recursion

When `depth == max_depth`, no more recursive calls are made.

The program returns one level at a time.

Each completed function call destroys its stack frame.

The local variables (`marker`, `local_int`, `local_buf`, `p_local`) cease to exist when their function returns.

### Heap
- Empty.

---

## Step 5 – Program exit

The `main()` stack frame is destroyed.

No memory leaks occur because no heap memory was allocated.

### AI correction

A common mistake is to think that `p_local` remains valid after `dump_frame()` returns.

This is incorrect.

`p_local` points to `local_int`, which is a local stack variable. Once `dump_frame()` returns, both `local_int` and `p_local` are destroyed, so the pointer cannot be used anymore.