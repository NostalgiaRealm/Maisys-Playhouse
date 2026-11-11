
/* ==== __break @ 00409626 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409626-00409626
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


