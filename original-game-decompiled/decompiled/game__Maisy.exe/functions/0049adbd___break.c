
/* ==== __break @ 0049adbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adbd-0049adbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


