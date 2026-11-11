
/* ==== __break @ 004365df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004365df-004365df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


