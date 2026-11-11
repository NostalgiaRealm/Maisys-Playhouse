
/* ==== __break @ 0043ed11 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ed11-0043ed11
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


