
/* ==== __break @ 0045f76d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f76d-0045f76d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


