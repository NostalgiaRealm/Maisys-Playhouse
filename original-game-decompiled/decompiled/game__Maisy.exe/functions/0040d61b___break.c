
/* ==== __break @ 0040d61b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040d61b-0040d61b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


