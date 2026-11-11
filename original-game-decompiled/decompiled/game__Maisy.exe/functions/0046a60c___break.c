
/* ==== __break @ 0046a60c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046a60c-0046a60c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


