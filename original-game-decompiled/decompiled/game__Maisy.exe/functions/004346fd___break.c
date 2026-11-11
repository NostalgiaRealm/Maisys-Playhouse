
/* ==== __break @ 004346fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004346fd-004346fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


