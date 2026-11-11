
/* ==== __break @ 0040cbbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040cbbd-0040cbbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


