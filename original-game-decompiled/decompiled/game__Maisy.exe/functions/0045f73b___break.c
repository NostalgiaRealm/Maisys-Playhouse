
/* ==== __break @ 0045f73b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f73b-0045f73b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


