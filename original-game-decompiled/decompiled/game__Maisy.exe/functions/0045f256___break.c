
/* ==== __break @ 0045f256 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f256-0045f256
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


