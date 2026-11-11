
/* ==== __break @ 0049260b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049260b-0049260b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


