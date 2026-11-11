
/* ==== __break @ 0045f80f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f80f-0045f80f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


