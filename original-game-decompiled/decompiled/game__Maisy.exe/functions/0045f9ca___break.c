
/* ==== __break @ 0045f9ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9ca-0045f9ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


