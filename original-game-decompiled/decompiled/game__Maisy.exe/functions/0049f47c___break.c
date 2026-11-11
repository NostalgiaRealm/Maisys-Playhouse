
/* ==== __break @ 0049f47c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f47c-0049f47c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


