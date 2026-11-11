
/* ==== __break @ 004304db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304db-004304db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


