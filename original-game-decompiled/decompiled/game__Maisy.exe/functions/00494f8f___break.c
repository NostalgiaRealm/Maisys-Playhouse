
/* ==== __break @ 00494f8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494f8f-00494f8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


