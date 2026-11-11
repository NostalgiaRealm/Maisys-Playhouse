
/* ==== __break @ 00493626 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493626-00493626
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


