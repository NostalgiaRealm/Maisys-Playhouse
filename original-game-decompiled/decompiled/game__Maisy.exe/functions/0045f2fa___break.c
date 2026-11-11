
/* ==== __break @ 0045f2fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f2fa-0045f2fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


