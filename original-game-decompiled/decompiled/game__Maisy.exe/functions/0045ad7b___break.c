
/* ==== __break @ 0045ad7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad7b-0045ad7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


