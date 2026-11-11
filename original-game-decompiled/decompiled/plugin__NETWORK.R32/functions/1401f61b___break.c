
/* ==== __break @ 1401f61b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61b-1401f61b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


