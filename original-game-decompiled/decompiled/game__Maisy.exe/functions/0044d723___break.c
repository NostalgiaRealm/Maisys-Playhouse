
/* ==== __break @ 0044d723 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d723-0044d723
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


