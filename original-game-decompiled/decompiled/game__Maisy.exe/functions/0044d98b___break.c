
/* ==== __break @ 0044d98b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d98b-0044d98b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


