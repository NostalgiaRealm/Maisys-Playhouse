
/* ==== __break @ 0044a8cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8cf-0044a8cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


