
/* ==== __break @ 0043bf45 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf45-0043bf45
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


