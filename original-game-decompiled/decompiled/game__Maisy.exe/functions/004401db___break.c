
/* ==== __break @ 004401db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401db-004401db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


