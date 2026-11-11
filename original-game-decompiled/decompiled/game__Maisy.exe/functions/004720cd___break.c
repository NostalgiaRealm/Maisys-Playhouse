
/* ==== __break @ 004720cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720cd-004720cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


