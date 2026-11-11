
/* ==== __break @ 0044896b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044896b-0044896b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


