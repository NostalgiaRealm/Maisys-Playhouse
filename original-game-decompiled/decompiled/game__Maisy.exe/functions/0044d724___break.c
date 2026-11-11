
/* ==== __break @ 0044d724 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d724-0044d724
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


