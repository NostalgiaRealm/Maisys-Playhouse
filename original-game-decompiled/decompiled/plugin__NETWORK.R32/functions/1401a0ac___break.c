
/* ==== __break @ 1401a0ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ac-1401a0ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


