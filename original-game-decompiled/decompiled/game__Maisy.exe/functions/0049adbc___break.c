
/* ==== __break @ 0049adbc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adbc-0049adbc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


