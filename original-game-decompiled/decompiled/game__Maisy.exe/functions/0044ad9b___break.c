
/* ==== __break @ 0044ad9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ad9b-0044ad9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


