
/* ==== __break @ 0044d72f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d72f-0044d72f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


