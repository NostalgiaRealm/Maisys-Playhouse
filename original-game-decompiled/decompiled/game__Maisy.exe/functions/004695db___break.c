
/* ==== __break @ 004695db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695db-004695db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


