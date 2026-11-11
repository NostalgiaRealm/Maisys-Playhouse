
/* ==== __break @ 004304cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304cf-004304cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


