
/* ==== __break @ 14010a6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6a-14010a6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


