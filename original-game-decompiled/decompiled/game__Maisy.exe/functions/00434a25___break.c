
/* ==== __break @ 00434a25 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00434a25-00434a25
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


