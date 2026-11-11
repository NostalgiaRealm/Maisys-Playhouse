
/* ==== __break @ 004720cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720cf-004720cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


