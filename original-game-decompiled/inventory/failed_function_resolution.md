# Assembly-only entries: resolution

Two entries have disassembly but no pseudocode (Ghidra: "Cannot properly adjust input varnodes"). Both were inspected in `disassembly.asm`:

| Module | Address | Finding | Status |
|---|---|---|---|
| plugin__BASIC.X32 | 110237ee | 2 bytes `8B FF` (`mov edi,edi`): alignment filler between a `ret` at 110237ed and the switch table `switchdataD_110237f0`. Not a function; created by the heuristic "clean-gap-fragment" pass. | Confirmed non-function. Nothing to decompile. |
| plugin__NETWORK.R32 | 140116f4 | 139 bytes that end in `jmp 0x140114a7` and share the epilogue (`add esp,0x1ac`) of the function above it: a basic block of that function reached through a switch Ghidra did not resolve, split off by the "orphan-instructions" pass. | Confirmed fragment of the enclosing function; fully disassembled; pseudocode for this block unresolved. |

No function found by auto-analysis failed to decompile in any module.
