
/* ==== __break @ 1401200a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200a-1401200a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


