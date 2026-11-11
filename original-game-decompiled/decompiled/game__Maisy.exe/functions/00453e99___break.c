
/* ==== __break @ 00453e99 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00453e99-00453e99
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


