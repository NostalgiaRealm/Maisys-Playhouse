
/* ==== __break @ 0049f47b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f47b-0049f47b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


