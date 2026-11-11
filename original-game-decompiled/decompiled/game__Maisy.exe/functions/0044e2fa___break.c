
/* ==== __break @ 0044e2fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e2fa-0044e2fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


