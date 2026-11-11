
/* ==== __break @ 0040fb6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb6b-0040fb6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


