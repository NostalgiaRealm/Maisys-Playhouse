
/* ==== __break @ 0044d98f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d98f-0044d98f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


