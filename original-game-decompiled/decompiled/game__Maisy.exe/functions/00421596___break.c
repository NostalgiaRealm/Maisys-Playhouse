
/* ==== __break @ 00421596 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00421596-00421596
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


