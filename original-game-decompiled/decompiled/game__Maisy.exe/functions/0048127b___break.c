
/* ==== __break @ 0048127b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048127b-0048127b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


