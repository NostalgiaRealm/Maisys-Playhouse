
/* ==== __break @ 0045f80d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f80d-0045f80d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


