
/* ==== __break @ 0046ad3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad3d-0046ad3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


