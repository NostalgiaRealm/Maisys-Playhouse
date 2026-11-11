
/* ==== __break @ 0049f54b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f54b-0049f54b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


